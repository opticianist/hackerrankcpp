class Box{
private:
    int l;
    int b;
    int h;

public:
    Box(){
       this->l=0;
       this->b=0;
       this->h=0;
        
    }
    
    Box(int l1,int b1,int h1){
       this->l=l1;
       this->b=b1;
       this->h=h1;
        
    }
    
    Box(Box &other){
        
        this->l=other.l;
        this->b=other.b;
        this->h=other.h;
        
    }
    
    int getLength(){
        
        return this->l;
    }
    int getBreadth (){
        return this->b;
    }
    
    int getHeight (){
        return this->h;    
    }
    
    long long CalculateVolume(){
        
        return (long long)b*h*l;
    }
    
    friend bool operator<(Box&A,Box& B){
        
        if(B.getLength() > A.getLength()){
            return true;
        }
        
        else if ( (B.getBreadth()>A.getBreadth() ) && ( B.getLength()==A.getLength() ) ){
            return true;
        }
        
        else if( (B.getHeight()>A.getHeight() ) && (B.getBreadth()== A.getBreadth() ) && 
                ( B.getLength()==A.getLength()) ){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    friend ostream& operator<<(ostream& out,Box& B){
        
        cout<< B.getLength() << " " << B.getBreadth() << " " << B.getHeight() ; 
        return out;
    }
    
    
    
    
};
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)