prompt("Lets game play !!");
let btn=document.querySelectorAll(".btn");     // for saari buttons.. ka single element
let reset=document.querySelectorAll(".btn2");
let h3=document.querySelector("h3");
let hide=document.querySelector(".hide");
const winpatterns=[
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [0,4,8],
    [2,4,6],
];
let turn=1;
const resetgame=()=>{      // functions for reset..
    enableandclean();
    enableall();
    turn=1;
    hide.classList.add("hide");
};
reset.forEach((box)=>{
    box.addEventListener("click" , ()=>{
        enableandclean();
        enableall();
        turn=1;
        hide.classList.add("hide");
    });
});
const enableall=()=>{
    for(let i of btn){
        i.disabled=false;          // game khatam hone ke baad koi ni chl payega..
        
    }
};
const enableandclean=()=>{
    for(let i of btn){
        i.innerText="";   // clear function
    }
};

const disableall=()=>{
    for(let i of btn){
        i.disabled=true;          // game khatam hone ke baad koi ni chl payega..
    }
};


btn.forEach((box) => {       // Game on // koi ant ni h iska..

    box.addEventListener("click",()=>{
        
        //if(box.innerText===""){
            if(turn===1){
                box.innerText="X";
                turn=0;
            }
            else{
                box.innerText="O";
                turn = 1;
            }
            check(); // if game is compleate..
            box.disabled=true;    // we also can use this  logic for not cahnging the value if once inserted
        //}
    });
    
});


const showin=(i)=>{
    disableall();
    h3.innerText=`Congractualtions , winner is ${i}`;   // ye ' ni ` h...  if you wanna add and variable name into the text..
    hide.classList.remove("hide");

};

const check=()=>{
    for( let i of winpatterns){       // checking all the possibilities to win..
        let pos1=btn[i[0]].innerText;
        let pos2=btn[i[1]].innerText;
        let pos3=btn[i[2]].innerText;
        if(pos1!="" && pos2!="" && pos3!="" ){
            if(pos1===pos2 && pos2===pos3){
                console.log("Winner !!!" , pos1); // position 1 is winner
                showin(pos1);
            }
        }
    }
};





 






