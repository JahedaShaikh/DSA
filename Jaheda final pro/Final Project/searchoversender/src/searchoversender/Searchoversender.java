/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package searchoversender;

import java.util.ArrayList;

/**
 *
 * @author welcome
 */
public class Searchoversender {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String str="C://sensor dataset 1.xls";
        ArrayList data=new ExcelReader().getExcelData(str);
        String ip="localhost";
        for (int i = 0; i < data.size(); i++)
        {
            ArrayList row=(ArrayList) data.get(i);
            String val1=(String) row.get(0);
            String val2=(String) row.get(1);
            String msg="sensorvalue"+"#"+val1+"#"+val2;
            new ServerSender().sendData(msg, ip);
            
            
        }
        
        
    }
    
}
