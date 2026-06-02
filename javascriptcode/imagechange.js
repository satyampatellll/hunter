// const arr=[
//     "https://cdn.pixabay.com/photo/2015/04/23/22/00/tree-736885__480.jpg",
//     "https://cdn.pixabay.com/photo/2016/11/29/03/53/abstract-1868728__480.jpg",
//     "https://cdn.pixabay.com/photo/2015/04/23/22/00/tree-736885__480.jpg",
//     "https://cdn.pixabay.com/photo/2016/11/29/03/53/abstract-1868728__480.jpg",
// ]







// const img = document.querySelector('img');
// let num=0
// setInterval(function(){
//     img.setAttribute("src",arr[num]);
//     num++;
//     if(num>=arr.length){
//         num=0;
//     }
// },2000);




// let img = document.querySelector('img');
// console.log(img);(img.attributes.src.value)

// setTimeout(()=>{
//     console.log("C");
// },10)

// setTimeout(()=>{
//     console.log("D");
// },0)

// setTimeout(()=>{
//     console.log("B");
// },1000)
// console.log("A");



//call back function
// function step1(fn){}
// function step2(fn){}
// function step3(fn){}
// step1(function(){
//     step2(function(){
//         step3(function(){
//             step4()
//         })
//     })
// })


//rej()


// function step1(){
//     return new Promise(function(resolve,reject){
//         setTimeout(()=>{
//             console.log("step1");
//             resolve()
//         },5000)
//     })
// }
// function step2(){
//     return new Promise(function(resolve,reject){
//         setTimeout(()=>{
//             console.log("step2");
//             resolve()
//         },2000)
//     })
// }``

// fetch("https://jsonplaceholder.typicode.com/todos/1")
//     .then((data) => {
//         return data.json();
//     })
//     .then((val) => {
//         console.log(val);
//     })
//     .catch((err) => {
//         console.log(err);
//     });

//show data of api in console

