#include <bits/stdc++.h>
#include "BoardGame_Classes.h"
#include "Games.h"
#include "All_Players.h"

using namespace std;
#define ll long long
void manager();
string menu(){
    cout<<"           <<<<<Welcome to our gaming application>>>>>"<<endl<<endl;
    cout<<"Choose your desired game"<<endl;
    cout<<"1. Pyramic Tic-Tac-Toe          ";
    cout<<"2. Connect 4"<<endl;
    cout<<"3. 5x5 Tic-Tac-Toe              ";
    cout<<"4. Word Tic-Tac-Toe"<<endl;
    cout<<"5. Numerical Tic-Tac-Toe        ";
    cout<<"6. Misere Tic-Tac-Toe"<<endl;
    cout<<"7. Ultimate Tic-Tac-Toe         ";
    cout<<"8. SUS"<<endl;
    cout<<"9. Exit"<<endl;
    string choice;
    cin>>choice;
    while(true){
        if(choice!="1"&& choice!="2"&& choice!="3"&&choice!="4"&&choice!="5"&&choice!="6"&&choice!="7"&&choice!="8"&&
           choice!="9")
        {
            cout<<"Please enter a valid choice"<<endl;
            cin>>choice;
        }
        else break;
    }
    return choice;
}

string sub_menu(){
    cout<<"1. Human"<<endl;
    cout<<"2. Normal Computer"<<endl;
    cout<<"3. AI"<<endl;
    string choice;
    cin>>choice;
    while(true) {
        if(choice != "1" && choice != "2" && choice != "3")
        {
            cout << "Please enter a valid choice" << endl;
            cin >> choice;
        }
        else break;
    }
    return choice;
}

void pyramic(string& choice1,string& choice2,string& name1,string& name2){
    if(choice1=="1"&& choice2=="1"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="1"&& choice2=="2"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="1"&& choice2=="3"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Pyramic_AI<char> player2(name2, 'O', board_pointer, sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        // Initialize valid move indexes


        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="1"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player2, &player1 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="2"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="3") {
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();
        Computer_Player<char> player1(name1, 'X',board_pointer,sharedData );
        Pyramic_AI<char> player2(name2, 'O', board_pointer,sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="3"&& choice2=="1"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();
        Human_Player<char> player1(name2, 'X', board_pointer,sharedData);
        Pyramic_AI<char> player2(name1, 'O', board_pointer,sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="3"&& choice2=="2"){
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        auto sharedData = std::make_shared<SharedData<char>>();
        // Initialize players
        Computer_Player<char> player1(name2, 'X', board_pointer,sharedData);
        Pyramic_AI<char> player2(name1, 'O', board_pointer,sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else{
        Pyramic_board<char> pyramicBoard;
        Board<char>* board_pointer=&pyramicBoard;
        auto sharedData = std::make_shared<SharedData<char>>();
        // Initialize players
        Pyramic_AI<char> player1(name1, 'X', board_pointer,sharedData);
        Pyramic_AI<char> player2(name2, 'O', board_pointer,sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
}

void playFourInARow(string &choice1 , string &choice2 , string &name1 , string &name2){
    if(choice1=="1"&& choice2=="1") {
        FourInARow<char> connectfour;
        Board<char> *board_pointer = &connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char> *players[] = {&player1, &player2};

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="1"&& choice2=="2"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="1"&& choice2=="3"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        FourInARowAI<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array

        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="1"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player2, &player1 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="2"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if(choice1=="2"&& choice2=="3") {
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        FourInARowAI<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        player1.set_turn(1);
        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();

    }
    else if(choice1=="3"&& choice2=="1"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'O', board_pointer, sharedData);
        FourInARowAI<char> player2(name1, 'X', board_pointer, sharedData);
        // Store pointers to the players in an array
        player1.set_turn(2);
        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);
        //Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();

    }
    else if(choice1=="3"&& choice2=="2"){
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        FourInARowAI<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else{
        FourInARow<char> connectfour;
        Board<char>* board_pointer=&connectfour;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        FourInARowAI<char> player1(name1, 'X', board_pointer, sharedData);
        FourInARowAI<char> player2(name2, 'O', board_pointer, sharedData);

        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        player2.get_players(players);

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

}

void five_by_five(string& choice1, string& choice2, string& name1, string& name2) {
    if (choice1 == "1" && choice2 == "1") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;
        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        // Store pointers to the players in an array
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "1" && choice2 == "2") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "1" && choice2 == "3") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        FivebyFive_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);


        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "1") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'O', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'X', board_pointer, sharedData);
        player2.set_turn(1);
        player1.set_turn(2);

        Player<char>* players[] = { &player2, &player1 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "2") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "3") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        FivebyFive_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);


        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "1") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'O', board_pointer, sharedData);
        FivebyFive_AI<char> player2(name1, 'X', board_pointer, sharedData);

        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);


        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "2") {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name2, 'O', board_pointer, sharedData);
        FivebyFive_AI<char> player2(name1, 'X', board_pointer, sharedData);

        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);


        // Run the game
        game.run();
    }
    else {
        FiveByFiveBoard<char> fiveByFiveBoard;
        Board<char>* board_pointer = &fiveByFiveBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        FivebyFive_AI<char> player1(name1, 'X', board_pointer, sharedData);
        FivebyFive_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
}

void misere_tic_tac_toe(string& choice1, string& choice2, string& name1, string& name2) {
    if (choice1 == "1" && choice2 == "1") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "1" && choice2 == "2") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "1" && choice2 == "3") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Misere_AI<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "1") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player2, &player1 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "2") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "3") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Misere_AI<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "1") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Misere_AI<char> player1(name1, 'O', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'X', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "2") {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Misere_AI<char> player2(name1, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player2, &player1 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else {
        MisereTicTacToe<char> misereTicTacToeBoard;
        Board<char>* board_pointer = &misereTicTacToeBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Misere_AI<char> player1(name1, 'X', board_pointer, sharedData);
        Misere_AI<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
}

void sus_game(string& choice1, string& choice2, string& name1, string& name2) {
    if (choice1 == "1" && choice2 == "1") {
        SUS<char> susBoard;
        Board<char>* board_pointer = &susBoard;

        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'S', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'U', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run(); // Adjust game flags as needed
    }

    else if (choice1 == "1" && choice2 == "2") {
        SUS<char> susBoard;
        Board<char>* board_pointer = &susBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'S', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'U', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "1" && choice2 == "3") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }

    else if (choice1 == "2" && choice2 == "1") {
        SUS<char> susBoard;
        Board<char>* board_pointer = &susBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'U', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'S', board_pointer, sharedData);
        Player<char>* players[] = { &player2, &player1 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "2" && choice2 == "2") {
        SUS<char> susBoard;
        Board<char>* board_pointer = &susBoard;
        auto sharedData = std::make_shared<SharedData<char>>();
        Computer_Player<char> player1(name1, 'S', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'U', board_pointer,sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "3") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else if (choice1 == "3" && choice2 == "1") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else if (choice1 == "3" && choice2 == "2") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
}

void word_tic_tac_toe(string choice1,string choice2,string name1,string name2){
    if (choice1 == "1" && choice2 == "1") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();  // Adjust game flags as needed
    }

    else if (choice1 == "1" && choice2 == "2") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "1" && choice2 == "3") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Word_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "2" && choice2 == "1") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player2, &player1 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "2" && choice2 == "2") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "3") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Word_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "1") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Word_AI<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "3" && choice2 == "2") {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Word_AI<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else {
        Word_Board<char> wordBoard;
        Board<char>* board_pointer = &wordBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Word_AI<char> player1(name1, 'X', board_pointer, sharedData);
        Word_AI<char> player2(name2, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player1, &player2 };
        player1.get_players(players);
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
}

void playNumericalTicTacToe(string &choice1, string &choice2, string &name1, string &name2) {
    if (choice1 == "1" && choice2 == "1") { // Human vs Human
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    } else if (choice1 == "1" && choice2 == "2") { // Human vs Computer
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();

    }else if(choice1 == "1" && choice2 == "3"){
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        NumericalBoardAI<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        Player<char> *players[] = {&player1, &player2};
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();

    } else if (choice1 == "2" && choice2 == "1") { // Computer vs Human
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    } else if (choice1 == "2" && choice2 == "2") { // Computer vs Computer
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }else if( choice1 == "2" && choice2 == "3"){
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        NumericalBoardAI<char> player2(name2, 'O', board_pointer, sharedData);
        player1.set_turn(1);
        Player<char> *players[] = {&player1, &player2};
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }else if(choice1 == "3" && choice2 == "1"){
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        NumericalBoardAI<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};
        player1.get_players(players);
        GameManager<char> game(board_pointer, players);
        // Run the game
        game.run();



    }else if( choice1 == "3"&& choice2 == "2"){
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        NumericalBoardAI<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        player2.set_turn(2);
        Player<char> *players[] = {&player1, &player2};
        player1.get_players(players);
        GameManager<char> game(board_pointer, players);
        // Run the game
        game.run();

    }else{
        NumericalBoard<char> gameBoard;
        Board<char> *board_pointer = &gameBoard;
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        NumericalBoardAI<char> player1(name1, 'X', board_pointer, sharedData);
        NumericalBoardAI<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char> *players[] = {&player1, &player2};
        player1.get_players(players);
        player2.get_players(players);
        GameManager<char> game(board_pointer, players);
// Run the game
        game.run();

    }

}

void Ultimate(string choice1, string choice2, string name1,string name2){
    if (choice1 == "1" && choice2 == "1") {
        UltimateTicTacToe<char> Ultimate;
        Board<char>* board_pointer = &Ultimate;

        // Initialize players
        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Human_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };

        // Create the Gaming instance
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run(); // Adjust game flags as needed
    }

    else if (choice1 == "1" && choice2 == "2") {
        UltimateTicTacToe<char> Ultimate;
        Board<char>* board_pointer = &Ultimate;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer, sharedData);
        Player<char>* players[] = { &player1, &player2 };
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "1" && choice2 == "3") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }

    else if (choice1 == "2" && choice2 == "1") {
        UltimateTicTacToe<char> Ultimate;
        Board<char>* board_pointer = &Ultimate;

        auto sharedData = std::make_shared<SharedData<char>>();

        // Create two Human_Player objects, passing the shared data
        Human_Player<char> player1(name2, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name1, 'O', board_pointer, sharedData);

        Player<char>* players[] = { &player2, &player1 };
        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }

    else if (choice1 == "2" && choice2 == "2") {
        UltimateTicTacToe<char> Ultimate;
        Board<char>* board_pointer = &Ultimate;
        auto sharedData = std::make_shared<SharedData<char>>();
        Computer_Player<char> player1(name1, 'X', board_pointer, sharedData);
        Computer_Player<char> player2(name2, 'O', board_pointer,sharedData);
        Player<char>* players[] = { &player1, &player2 };

        GameManager<char> game(board_pointer, players);

        // Run the game
        game.run();
    }
    else if (choice1 == "2" && choice2 == "3") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else if (choice1 == "3" && choice2 == "1") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else if (choice1 == "3" && choice2 == "2") {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
    else {
        cout<<"There is no AI for this game"<<endl;
        cout<<"Returning to main menu"<<endl;
        manager();
    }
}
void manager() {
    string choice = menu();
    if (choice == "9") {
        cout << "Thanks for using our application" << endl;
        exit(0);
    }

    cout << "Choose Player 1 name" << endl;
    string name1;
    cin >> name1;
    cout << "Choose type of player 1" << endl;
    string sub_choice_1 = sub_menu();

    cout << "Choose Player 2 name" << endl;
    string name2;
    cin >> name2;
    cout << "Choose type of player 2" << endl;
    string sub_choice_2 = sub_menu();

    switch (stoi(choice)) {
        case 1:
            pyramic(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 2:
            playFourInARow(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 3:
            five_by_five(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 4:
            word_tic_tac_toe(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 5:
            playNumericalTicTacToe(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 6:
            misere_tic_tac_toe(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 7:
            Ultimate(sub_choice_1, sub_choice_2, name1, name2);
            break;
        case 8:
            sus_game(sub_choice_1, sub_choice_2, name1, name2);
            break;
        default:
            break;
    }
    manager();
}

int main() {
    manager();
}