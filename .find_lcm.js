
let n1=4, n2=6, l;

for(l = n1>n2? n1: n2; l<=n1*n2; l++){
    
    if(l%n1==0 && l%n2==0){
        console.log("Output: " + l);
        break;
    }

}