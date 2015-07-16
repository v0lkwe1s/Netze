/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.netzeapp.socket;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

/**
 *
 * @author williamvolkweis
 */
public class socketClient {
 
    private String host="";
    private int port=0;

    public socketClient(String host, int port) {
    
        this.host = host;
        this.port =port;
        
    }
    
    public void send(String comm) {
        Socket socket = null;
        
        try {
            
            socket = new Socket(host, port);
            
            DataOutputStream out = new DataOutputStream(socket.getOutputStream());
            DataInputStream  in  = new DataInputStream(socket.getInputStream());
            
            out.writeUTF(comm);
            
            System.out.println(in.readLine());
            out.close();
            
            in.close();
                        
            socket.close();
            
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        
    }    
    
}
