//
//  ViewController.h
//  git1
//
//  Created by pau on 25/10/15.
//  Copyright © 2015 pau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end


// Generar un rango de 0 a 100, incluye el número 100 en el rango.

let numeros = 0...100

//Tienes que iterar el rango completo, utilizando la sentencia for para obtener cada número del rango y aplicar las siguientes reglas de impresión.

/*Al evaluar cada número debes aplicar las siguientes reglas:
 
 Si el número es divisible entre 5, imprime: # el número  + “Bingo!!!”*/


for num in numeros{
    switch num{
    case 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100: print ("\(num) bingo") default:
        print ("No es divisible para 5")
    }
    
    
}

/*Si el número es par, imprime: # el número + “par!!!”
 Si el número es impar, imprime: # el número + “impar!!!”*/



for num in numeros{
    switch num{
    case 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100: print ("\(num) par") default:
        print ("\(num) impar")
    }
    
}


//Si el número se encuentra dentro de un rango del 30 al 40, imprime: # el número +  “Viva Swift!!!”



for num in numeros{
    if num < 41 && num > 29{
        print ("\(num) Viva Swift")
    }
    
    
}



