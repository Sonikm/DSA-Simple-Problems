
let n1=40, n2=4, g;

for(g = n1<n2? n1: n2; g>0 ; g--){
    
    if(n1%g==0 && n2%g==0){
        console.log("Output: " + g);
        break;
    }

}