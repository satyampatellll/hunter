let input =document.querySelector("input");
let btn =document.querySelector("button");
let list =document.getElementById("list");


btn.addEventListener("click",function(){
    let data = input.value;
     
    fetch('https://api.tvmaze.com/search/shows?q=+${data}')
    .then((info) => {
        return info.json();
        // Handle the API response
    });


    function show(val){
        let img = document.createElement("img");
        img.setAttribute("src",val[0].show.image.original);
        list.appendChild(img);


    }   
    show(data);
})

