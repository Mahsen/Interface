#ifndef CTATES_HPP
#define CTATES_HPP
/************************************************** Description *******************************************************/
/*
    File : States.hpp
    Programmer : Mohammad Lotfi
    Used : Use header
    Design Pattern : Nothing
    Types of memory : Nothing
    Total Tread : Nothing
    Site : https://www.mahsen.ir
    Tel : +989124662703
    Email : info@mahsen.ir
    Last Update : 2023/5/16
*/
/************************************************** Warnings **********************************************************/
/*
    Nothing
*/
/************************************************** Wizards ***********************************************************/
/*
    Nothing
*/
/************************************************** Includes **********************************************************/
/*
    Nothing
*/
/************************************************** Defineds **********************************************************/
/*
    Nothing
*/
/************************************************** Names *************************************************************/
/*
    Nothing
*/
/************************************************** Variables *********************************************************/
/*
    Nothing
*/
/************************************************** Opjects ***********************************************************/
/* All object to return their state need this object machines or tasks */
template <typename T_States = int>
class State {

    private:

        /* The variable holding the current state */
        T_States _State;

    public:
    
        /* Set current state from outside */
        void Set(T_States State) {
            this->_State = State;
        }

        /* Set current state */
        T_States Get() {        
            return this->_State;
        }

};
/************************************************** Functions *********************************************************/
/*
    Nothing
*/
/************************************************** Tasks *************************************************************/
/*
    Nothing
*/
/************************************************** Vectors ***********************************************************/
/*
    Nothing
*/
/**********************************************************************************************************************/
#endif