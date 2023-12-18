 #include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of the persons :";
    cin>>n;
    for(int i=0; i<n; i++) {




   string G;

    double  H, W, BMI;  // H: is the height of a person, W: is the weight of a person, BMI is the Body Mass Index of a person
   cout << "\nEnter details for person"<<i<<"\n";

   cout<<"please,enter your gender :"; // G is gender female or male
   cin>>G;
   cout<<"Please enter your Weight (in kg): ";
    cin>>W;
    cout<<"Please enter your Height in (meter): ";
    cin>>H;

    BMI = W/(H*H);
    cout<<G<<" the BMI is:"<<BMI;





    if(G=="f"){
    if ( BMI<18.5){
    cout<<" you are underweight\n";
    

    }else if(  BMI <=24.9){
    cout<<" you are normal weight\n";
     } else if(  BMI<=29.9){
    cout<<" you are over weight\n ";
   }else {
    cout<<"you are obese\n";
    
      }           

 }else if(G=="M"){
     if   ( BMI<=20.5){
    cout<<" you are underweight \n"<<endl;
    }

   } else if( BMI<=25.9){
    cout<<" you are normal weight"<<endl;
    
    } else if(BMI <=29.9){
    cout<<" you are over weight\n "<<endl;
    }
    else{
        cout<<"you are obese\n";
    }
}
    return 0;

}

