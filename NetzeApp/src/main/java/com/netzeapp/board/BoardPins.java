/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.netzeapp.board;

import javax.print.DocFlavor;

/**
 *
 * @author williamvolkweis
 */
public class BoardPins {
    
    private String pin = "";
    private String type = "";
    private String gpio = "";

    public BoardPins() {
    }

    public String getPin() {
        return pin;
    }

    public void setPin(String pin) {
        this.pin = pin;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getGpio() {
        return gpio;
    }

    public void setGpio(String gpio) {
        this.gpio = gpio;
    }

    
    
}
