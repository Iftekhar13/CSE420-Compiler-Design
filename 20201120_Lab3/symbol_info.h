#include<bits/stdc++.h>
using namespace std;

class symbol_info
{
private:
    string name;
    string type;
    string data_type;
    vector<string> param_types;
    vector<string> param_names;
    int array_size;
    string id_type;

    // Write necessary attributes to store what type of symbol it is (variable/array/function)... example can be: string ID_type
    // Write necessary attributes to store the type/return type of the symbol (int/float/void/...) example can be: string var_type
    // Write necessary attributes to store the parameters of a function
    // Write necessary attributes to store the array size if the symbol is an array

public:
    symbol_info(string name, string type, string data_type="", vector<string> param_types = vector<string>(), vector<string> param_names = vector<string>())
    {
        this->name = name;
        this->type = type;
        this->id_type = id_type;
        this->data_type=data_type;
        this->array_size=0;
        this->param_types = param_types;
        this->param_names = param_names;
        
    }
    string get_name()
    {
        return name;
    }
    string get_type()
    {
        return type;
    }
    string get_id_type() { 
        return id_type; 
        }
   
    void set_name(string name)
    {
        this->name = name;
    }
    void set_type(string type)
    {
        this->type = type;
    }
    // Write necessary functions to set and get the attributes
    string get_data_type(){
        return data_type;
    }
    void set_data_type(string data_type){
        this->data_type=data_type;
    }

    int get_array_size() { 
        return array_size; 
        }
    void set_array_size(int size) { 
        this->array_size = size; 
        }
    vector<string> get_param_types() { 
        return param_types; 
        }
    vector<string> get_param_names() { 
        return param_names; 
        }
    void add_parameter(string type, string name) {
        param_types.push_back(type);
        param_names.push_back(name);
    }
     void set_param_types(const vector<string>& types) { 
        param_types = types; 
        }
    void set_param_names(const vector<string>& names) { 
        param_names = names; 
        }
    ~symbol_info()
    {
        // Write necessary code to deallocate memory, if necessary
    }
};