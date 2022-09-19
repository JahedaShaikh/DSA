/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package searchoversender;

import java.io.File;
import java.util.ArrayList;
import jxl.Cell;
import jxl.Sheet;
import jxl.Workbook;

/**
 *
 * @author welcome
 */
public class ExcelReader {
    
     public ArrayList getExcelData(String sf)
    {
        ArrayList mas=new ArrayList();

      try
        {
            Workbook ReadExcel = Workbook.getWorkbook(new File(sf));
            Sheet sheet = ReadExcel.getSheet(0);
            int a=sheet.getColumns();
            int b=sheet.getRows();
//            System.out.println("Number of collumns "+Integer.toString(a));
//            System.out.println("Number of rows " +Integer.toString(b));
           
            for (int i=1;i<b;i++)
            {
                ArrayList row=new ArrayList();
                for(int j=0;j<a;j++)
                {

                  //  System.out.println("a is "+a);

                Cell a1 = sheet.getCell(j,i); /* Get the first cell of Column A , 0 maps to A */

                String ed = a1.getContents();
                ed=ed.trim();
                ed=ed.toLowerCase();

              //  System.out.print(ed+" ");
                   // if(!ed.isEmpty())
                row.add(ed);
                }
                mas.add(row);
                //System.out.println("");
            }
              ReadExcel.close();
            }
        catch (Exception i)
        {
            System.out.println("Exception is "+i);
        }

        return mas;
        
    }
    
}
