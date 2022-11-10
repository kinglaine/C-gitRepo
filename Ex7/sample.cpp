class Sample{
    private:
        int x;
        double y;
    public:
        Sample(){
            x = 0;
            y = 0;
        }
        Sample(int x){
            this-> x = x;
        }
        Sample(int x, int y){
            this -> x = x;
            this -> y = 0;
        }
        Sample(int x, int y){
            this -> x = x;
            this -> y = y;
        }
};
