/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.netzeapp.socket;

import com.netzeapp.board.BoardPins;
import com.netzeapp.screens.fMain;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import org.json.simple.parser.JSONParser;

/**
 *
 * @author williamvolkweis
 */
public class socketClient {
 
    private String host="";
    private int port=0;
    private String board;
       
    public socketClient(String host, int port) {
    
        this.host = host;
        this.port =port;
        
    }

    public String getBoard() {
        return board;
    }

    public void setBoard(String board) {
        this.board = board;
    }
   
    public String send(String comm) {
        Socket socket = null;
        String ret = "";
        try {
            
            socket = new Socket(host, port);
            DataInputStream in;
            try (DataOutputStream out = new DataOutputStream(socket.getOutputStream())) {
                in = new DataInputStream(socket.getInputStream());
                out.writeUTF(comm);
                ret = in.readLine();
                System.out.println("ret" + ret);
                in.close();
            }
            
            socket.close();
           
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        return ret;
        }  
    
     public ArrayList<BoardPins> getPin(String comm) {
        Socket socket = null;
        List<BoardPins> lPins = new ArrayList<>();
        
            try {
               
            socket = new Socket(host, port);
            DataInputStream in;
            DataOutputStream out = new DataOutputStream(socket.getOutputStream());
            in = new DataInputStream(socket.getInputStream());
            out.writeUTF(comm);
            String ret = in.readLine();
            System.out.println(ret);            
            in.close();
            
            JSONParser parser = new JSONParser();
            JSONObject obj = new JSONObject(ret);
            JSONArray pins = obj.getJSONArray("PinHeader");

            for (int i = 0; i < pins.length(); i++) {
                JSONObject p = pins.getJSONObject(i);
                BoardPins bp = new BoardPins();
                bp.setGpio(p.getString("gpio"));
                bp.setPin(p.getString("pin"));
                bp.setType(p.getString("type"));
                lPins.add(bp);
            }
            socket.close();
            
            
            } catch (IOException | JSONException e) {
                System.out.println(e.getMessage());
            }
        return (ArrayList<BoardPins>) lPins;
        }    
    }

