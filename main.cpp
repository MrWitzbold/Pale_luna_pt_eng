#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void say_controls(string language)
{
    if(language == "eng")
    {
            cout << "Commands:\n";
            cout << "PICK_UP_SHOVEL\n";
            cout << "PICK_UP_ROPE\n";
            cout << "OPEN_DOOR\n";
            cout << "GO_EAST\n";
            cout << "USE_GOLD\n";
            cout << "USE_SHOVEL\n";
            cout << "USE_ROPE\n";
            cout << "FILL_HOLE_WITH_DIRT\n";
            cout << "PUT_DIRT_IN_HOLE\n";
            cout << "FILL_HOLE\n";
            cout << "DROP_GOLD\n";
            cout << "DROP_GOLD_ON_HOLE\n";
            cout << "PLACE_GOLD_IN_HOLE\n";
            cout << "PUT_GOLD_IN_HOLE\n";
            cout << "BURY_GOLD\n";
            cout << "DIG_HOLE_IN_GROUND\n";
            cout << "DIG_HOLE\n";
            cout << "GO_NORTH\n";
            cout << "GO_WEST\n";
            cout << "GO_EAST\n\n";
            cout << "=======================================================\n\n";
    }
    if(language == "ptbr")
    {
        cout << "Comandos:\n";
        cout << "PEGAR_PA\n";
        cout << "PEGAR_CORDA\n";
        cout << "ABRIR_PORTA\n";
        cout << "IR_LESTE\n";
        cout << "USAR_OURO\n";
        cout << "USAR_PA\n";
        cout << "USAR_CORDA\n";
        cout << "ENCHER_BURACO_COM_TERRA\n";
        cout << "COLOCAR_TERRA_NO_BURACO\n";
        cout << "ENCHER_BURACO\n";
        cout << "SOLTAR_OURO\n";
        cout << "SOLTAR_OURO_NO_BURACO\n";
        cout << "POSICIONAR_OURO_NO_BURACO\n"; // posicionar = place
        cout << "COLOCAR_OURO\n"; // colocar = put
        cout << "ENTERRAR_OURO\n";
        cout << "CAVAR_BURACO_NO_CHAO\n";
        cout << "CAVAR_BURACO\n";
        cout << "IR_NORTE\n";
        cout << "IR_OESTE\n";
        cout << "IR_LESTE\n\n";
        cout << "=======================================================\n\n";
    }
}

int main()
{
    string command = "";
    bool startup = true;
    bool door = false;
    bool path1 = false;
    bool path2 = false;
    bool path3 = false;
    bool hole = false;
    bool hole_gold = false;
    bool end = false;

    bool debug_mode = true;

    bool language_chosen = false;
    string language = "";

    while (language_chosen == false)
    {
        cout << "Write 'eng' if you want to play this in english\n";
        cout << "Escreva ptbr se voce quiser jogar em portugues\n";
        cin >> language;
        if(language == "eng" || language == "ptbr")
        {
            language_chosen = true;
        }
    }

    bool playing = true;

    while(playing == true)
    {
        if(debug_mode == true)
        {
            if(startup == true)
            {
                cout << "\nAT STARTUP\n";
            }
            if(door == true)
            {
                cout << "\nAT DOOR\n";
            }
            if(path1 == true)
            {
                cout << "\nAT PATH1\n";
            }
            if(path2 == true)
            {
                cout << "\nAT PATH2\n";
            }
            if(path3 == true) 
            {
                cout << "\nAT PATH3\n";
            }
            if(hole == true)
            {
                cout << "\nAT HOLE\n";
            }
            if(hole_gold == true)
            {
                cout << "\nAT HOLE_GOLD\n";
            }
        }

        say_controls(language);

        if(startup == true)
        {
            if(language == "eng")
            {
                cout << "-You are in a dark room. Moonlight shines through the window.\n\n";
                cout << "-There is GOLD in the corner, along with a SHOVEL and a ROPE.\n\n";
                cout << "-There is a DOOR to the EAST.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr")
            {
                cout << "\n-Voce esta em um quarto escuro. Voce ve a luz da lua pela janela.\n\n";
                cout << "-Tem OURO no canto do quarto, uma pa e uma corda.\n\n";
                cout << "-Tem uma porta ao LESTE.\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;
            if(command == "OPEN_DOOR" || command == "ABRIR_PORTA")
            {
                startup = false;
                door = true;
                path1 = false;
                path2 = false;
                path3 = false;
                hole = false;
                hole_gold = false;
            }
            usleep(5000);
            system("cls");
        }

        say_controls(language);

        if(door == true)
        {
            if(language == "eng")
            {
                cout << "-Reap your reward.\n\n";
                cout << "-PALE LUNA SMILES AT YOU\n\n";
                cout << "-You are in a forest. There are paths to the NORTH, WEST, and EAST\n\n";
                cout << "-Reap your reward.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr")
            {
                cout << "\n-Colete sua recompensa.\n\n";
                cout << "-A LUA PALIDA SORRI PARA VOCE\n\n";
                cout << "-Voce esta em uma floresta. Existem caminhos para o NORTE, OESTE e LESTE\n\n";
                cout << "-Colete sua recompensa.\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;
            cout << "\n\n";
            if(command == "USE_GOLD" || command == "USAR_OURO") 
            {
                if(language == "eng") 
                {
                    cout << "Not here.";
                }
                if(language == "ptbr") 
                {
                    cout << "Aqui nao.";
                }
            }
            if(command == "USE_SHOVEL" || command == "USAR_PA") 
            {
                if(language == "eng") 
                {
                    cout << "Not now.";
                }
                if(language == "ptbr") 
                {
                    cout << "Agora nao.";
                }
            }
            if(command == "USE_ROPE" || command == "USAR_CORDA") 
            {
                if(language == "eng") 
                {
                    cout << "Used this.";
                }
                if(language == "ptbr") 
                {
                    cout << "Usou isto.";
                }
            }
            if(command == "GO_WEST" || command == "IR_OESTE")
            {
                return 0;
            }
            if(command == "GO_NORTH" || command == "IR_NORTE")
            {
                startup = false;
                door = false;
                path1 = true;
                path2 = false;
                path3 = false;
                hole = false;
                hole_gold = false;
            }
            usleep(5000);
            system("cls");
        }

        say_controls(language);

        if(path1 == true)
        {
            if(language == "eng")
            {
                cout << "-Reap your reward.\n\n";
                cout << "-PALE LUNA SMILES AT YOU.\n\n";
                cout << "-You are in a forest. There are paths to the NORTH, WEST, and EAST.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr")
            {
                cout << "\n-Colete sua recompensa.\n\n";
                cout << "-A LUA PALIDA SORRI PARA VOCE\n\n";
                cout << "-Voce esta em uma floresta. Existem caminhos para o NORTE, OESTE e LESTE.\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;

            if(command == "USE_GOLD" || command == "USAR_OURO")
            {
                if(language == "eng")
                {
                    cout << "\n\nNot here.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nAqui nao.\n";
                }
            }
            if(command == "USE_SHOVEL" || command == "USAR_PA")
            {
                if(language == "eng")
                {
                    cout << "\n\nNot now.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nAgora nao.\n";
                }
            }
            if(command == "USE_ROPE" || command == "USAR_CORDA")
            {
                if(language == "eng")
                {
                    cout << "\n\nUsed this.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nUsou isto.\n";
                }
            }
            if(command == "GO_WEST" || command == "IR_OESTE" || command == "GO_NORTH" || command == "IR_NORTE")
            {
                return 0;
            }
            if(command == "GO_EAST" || command == "IR_LESTE")
            {
                startup = false;
                door = false;
                path1 = false;
                path2 = true;
                path3 = false;
                hole = false;
                hole_gold = false;
            }
            usleep(5000);
            system("cls");
        }
    
        say_controls(language);

        if(path2 == true) 
        {
            if(language == "eng")
            {
                cout << "-Reap your reward.\n\n";
                cout << "-PALE LUNA SMILES AT YOU.\n\n";
                cout << "-You are in a forest. There are paths to the NORTH, WEST, and EAST.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr")
            {
                cout << "\n-Colete sua recompensa.\n\n";
                cout << "-A LUA PALIDA SORRI PARA VOCE\n\n";
                cout << "-Voce esta em uma floresta. Existem caminhos para o NORTE, OESTE e LESTE.\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;

            if(command == "USE_GOLD" || command == "USAR_OURO")
            {
                if(language == "eng")
                {
                    cout << "\n\nNot here.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nAqui nao.\n";
                }
            }
            if(command == "USE_SHOVEL" || command == "USAR_PA")
            {
                if(language == "eng")
                {
                    cout << "\n\nNot now.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nAgora nao.\n";
                }
            }
            if(command == "USE_ROPE" || command == "USAR_CORDA")
            {
                if(language == "eng")
                {
                    cout << "\n\nUsed this.\n";
                }
                if(language == "ptbr")
                {
                    cout << "\n\nUsou isto.\n";
                }
            }
            if(command == "GO_WEST" || command == "IR_OESTE")
            {
                startup = false;
                door = false;
                path1 = false;
                path2 = false;
                path3 = true;
                hole = false;
                hole_gold = false;
            }
            if(command == "GO_NORTH" || command == "IR_NORTE" || command == "GO_EAST" || command == "IR_LESTE")
            {
                return 0;
            }
            usleep(5000);
            system("cls");
        }
        
        say_controls(language);
        
        if(path3 == true)
        {
            if(language == "eng")
            {
                cout << "-PALE LUNA SMILES WIDE.\n\n";
                usleep(2000);
                cout << "-There are no paths.\n\n";
                usleep(2000);
                cout << "-PALE LUNA SMILES WIDE.\n\n";
                usleep(2000);
                cout << "-The ground is soft.\n\n";
                usleep(2000);
                cout << "-PALE LUNA SMILES WIDE.\n\n";
                usleep(2000);
                cout << "-Here.\n\n";
                usleep(2000);
                cout << "-Command?\n";
                usleep(2000);
            }
            if(language == "ptbr")
            {
                cout << "-A LUA PALIDA SORRI DE ORELHA A ORELHA.\n\n";
                usleep(2000);
                cout << "-Nao existem caminhos.\n\n";
                usleep(2000);
                cout << "-A LUA PALIDA SORRI DE ORELHA A ORELHA.\n\n";
                usleep(2000);
                cout << "-O chao e macio\n\n";
                usleep(2000);
                cout << "-A LUA PALIDA SORRI DE ORELHA A ORELHA.\n\n";
                usleep(2000);
                cout << "-Aqui.\n\n";
                usleep(2000);
                cout << "-Comando?\n";
                usleep(2000);
            }
            cout << "- ";
            cin >> command;

            if(command == "DIG_HOLE" || command == "CAVAR_BURACO")
            {
                startup = false;
                door = false;
                path1 = false;
                path2 = false;
                path3 = false;
                hole = true;
                hole_gold = false;
            }
            usleep(5000);
            system("cls");
        }
    
        say_controls(language);

        if(hole == true)
        {
            if(language == "eng") 
            {
                cout << "-There is now a HOLE.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr") 
            {
                cout << "-Agora existe um BURACO\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;

            if(command == "DROP_GOLD" || command == "SOLTAR_OURO")
            {
                startup = false;
                door = false;
                path1 = false;
                path2 = false;
                path3 = false;
                hole = false;
                hole_gold = true;
            }
            usleep(5000);
            system("cls");
        }
    
        say_controls(language);

        if(hole_gold == true) 
        {
            if(language == "eng")
            {
                cout << "-The GOLD is in the HOLE.\n\n";
                cout << "-Command?\n";
            }
            if(language == "ptbr") 
            {
                cout << "-O OURO esta no BURACO.\n\n";
                cout << "-Comando?\n";
            }
            cout << "- ";
            cin >> command;

            if(command == "FILL_HOLE" || command == "ENCHER_BURACO") 
            {
                startup = false;
                door = false;
                path1 = false;
                path2 = false;
                path3 = false;
                hole = false;
                hole_gold = false;
                end = true;
            }
            usleep(5000);
            system("cls");
        }

        if(end == true)
        {
            if(language == "eng")
            {
                cout << "-Congratulations\n\n";
                cout << "-- 40.24248 --\n\n";
                cout << "-- 121.4434 -- ";
            }
            if(language == "ptbr")
            {
                cout << "-Parabens\n\n";
                cout << "-- 40.24248 --\n\n";
                cout << "-- 121.4434 -- ";
            }
            usleep(15000);
            return 0;
        }
    }
}
