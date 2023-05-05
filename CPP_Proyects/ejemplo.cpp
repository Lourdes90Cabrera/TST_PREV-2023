#include <iostream>

using namespace std;

int main()
{

    /**
     * Seccion 01
     *  Alumnos : Lourdes Isabel Cabrera, Diana Alejandra Erazo Peres, Alejandra Iveth Escalante Menjivar
     */

    // Declarando variables de entrada

    int salario, ventas;
    float Total_sav, Total_suma_sav;
    const float sav = 0.30;
    const float suma_sav = 0.20;
    char respuesta_genero = 'F', respuesta_ventas = 'S', respuesta_usuario = 'S', respuesta = 'S';

    /* Se solicita al empleado que ingrese el salario ganado*/

    cout << "Ingrese el Salario ganado :" << endl;
    cin >> salario;

    /* Se realiza la condición que evalua si el empleado ha ganado más de mil dolares en caso de ser así ,
    se le da un mensaje del tipo de descuento realizado y el subsidio total ganado*/

    if (salario >= 10000)
    {

        Total_sav = salario * sav;
        cout << "Se le ha aplicado un 0.30 al subsidio el total es de :  " << Total_sav << endl;

        cout << "Ingrese el genero al que pertenece :" << endl;
        cout << "[Femenino] o [Masculino] Ingrese una letra F o M" << endl;
        cin >> respuesta_genero;

        /* Se realiza la condición para determinar si el empleado es hombre o mujer
        según la respuesta ingresada */

        if (respuesta_genero == 'F')
        {

            cout << "Felicidades usted es apta para el ascenso al cargo de Jefa" << endl;
        }
        else
        {
            cout << "Felicidades usted es apto para el ascenso al cargo de Jefe" << endl;
        }

        /* Luego se le pregunta al empleado si ha realizado ventas en el més en caso de que la respuesta sea positiva
        entonces se realiza la condición en la cual le pide que ingrese las ganancias totales*/

        cout << "Usted ha generado ventas en el mes? " << endl;
        cout << "[SI] o [NO]" << endl;
        cin >> respuesta_ventas;

        if (respuesta_ventas == 'S')
        {

            cout << "Ingrese la ganancia total de las ventas realizadas" << endl;
            cin >> ventas;

            /** se realiza la condicion que determinara si las ganancias totales son las requeridas para obtener un ascenso*/

            if (ventas >= 5000)
            {

                cout << "Usted cumple con los criterios solicitados para el ascenso" << endl;

                /** Se le pregunta si desea el cargo */

                cout << "Desea aceptar el ascenso? " << endl;
                cout << "[SI] o [NO]" << endl;
                cin >> respuesta_usuario;

                if (respuesta_usuario == 'S')
                {

                    cout << "Felicidades por haber obtenido el puesto de jefatura" << endl;
                }
                else
                {
                    cout << "Usted no ha aceptado el puesto de jefatura" << endl;
                }
            }
            else
            {

                cout << "Usted no cumple con los criterios solicitados para el ascenso" << endl;
            }
        }
        else
        {

            cout << "Su reporte ha finalizado" << endl;
        }
    }
    else
    {

        Total_suma_sav = salario * suma_sav;
        cout << "Se le ha aplicado un 0.20 al subsidio el total es de :  " << Total_suma_sav << endl;
    }

    cout << "Desea generar otro reporte? " << endl;
    cout << "[SI] o [NO]" << endl;
    cin >> respuesta;

    if (respuesta == 'S')
    {

        do
        {
            /* Se solicita al empleado que ingrese el salario ganado*/

            cout << "Ingrese el Salario ganado : " << endl;
            cin >> salario;

            /* Se realiza la condición que evalua si el empleado ha ganado más de mil dolares en caso de ser así ,
            se le da un mensaje del tipo de descuento realizado y el subsidio total ganado*/

            if (salario >= 10000)
            {

                Total_sav = salario * sav;
                cout << "Se le ha aplicado un 0.30 al subsidio el total es de :  " << Total_sav << endl;

                cout << "Ingrese el genero al que pertenece " << endl;
                cout << "[Femenino] o [Masculino] Ingrese una letra F o M" << endl;
                cin >> respuesta_genero;

                /* Se realiza la condición para determinar si el empleado es hombre o mujer
                según la respuesta ingresada */

                if (respuesta_genero == 'F')
                {

                    cout << "Felicidades usted es apta para el ascenso al cargo de Jefa" << endl;
                }
                else
                {
                    cout << "Felicidades usted es apto para el ascenso al cargo de Jefe" << endl;
                }

                /* Luego se le pregunta al empleado si ha realizado ventas en el més en caso de que la respuesta sea positiva
                entonces se realiza la condición en la cual le pide que ingrese las ganancias totales*/

                cout << "Usted ha generado ventas en el mes? " << endl;
                cout << "[SI] o [NO]" << endl;
                cin >> respuesta_ventas;

                if (respuesta_ventas == 'S')
                {

                    cout << "Ingrese la ganancia total de las ventas realizadas" << endl;
                    cin >> ventas;

                    /** se realiza la condicion que determinara si las ganancias totales son las requeridas para obtener un ascenso*/

                    if (ventas >= 5000)
                    {

                        cout << "Usted cumple con los criterios solicitados para el ascenso" << endl;

                        /** Se le pregunta si desea el cargo */

                        cout << "Desea aceptar el ascenso? " << endl;
                        cout << "[SI] o [NO]" << endl;
                        cin >> respuesta_usuario;

                        if (respuesta_usuario == 'S')
                        {

                            cout << "Felicidades por haber obtenido el puesto de jefatura" << endl;
                        }
                        else
                        {
                            cout << "Usted no ha aceptado el puesto de jefatura" << endl;
                        }
                    }
                    else
                    {

                        cout << "Usted no cumple con los criterios solicitados para el ascenso" << endl;
                    }
                }
                else
                {

                    cout << "Su reporte ha finalizado" << endl;
                }
            }
            else
            {

                Total_suma_sav = salario * suma_sav;
                cout << "Se le ha aplicado un 0.20 al subsidio el total es de :  " << Total_suma_sav << endl;
            }

            cout << "Desea generar otro reporte? " << endl;
            cout << "[SI] o [NO]" << endl;
            cin >> respuesta;

        } while (respuesta == 'S' || respuesta == 's');
        system("Pause");
        return 0;
    }
    else
    {

        cout << "Muchas Gracias , Feliz Dia";
    }
}
