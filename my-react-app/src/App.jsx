

// import React, { PureComponent } from 'react'
// const App = () => {
//         let [color, setColor] = React.useState('red')
//         function fun1() {
//           setColor('blue')
//         }

//   return (
//     <div>
//       <div style={{ width: "100px", height: "100px", backgroundColor: color }}></div>
//       <button onClick={fun1}>click</button>
//     </div>
//   )
// }

// export default App


// import React, { PureComponent } from 'react'

// export class App extends PureComponent {
//   render() {
//     return (
//       <div>App</div>
//     )
//   }
// }

// export default App  



// import React from 'react'
// const App = () => {
  
//   let [input, setInput] = React.useState('')
//   let [data, setData] = React.useState('')

//   function fun1(e) {
//     setInput(e.target.value)
//   }
//   function done () {
//     setData(input)
//     setInput('')
  
//   }
  

//   return (
//     <div>
//       <button onClick={done}>click</button>
//       <input type="text" name="input" value={input} onChange={fun1} />
//       <h2>{data}</h2> // input value is stored in data and then input is cleared
//                       // when use input value is shown instantly 

//     </div>
//   )
// }

// export default App

// import React from 'react'
// import Form from './Form'

// // const App = () => {
//   return (
//     <div>
//       <Form />
//     </div>
//   )
// }

// export default App

//useeffect-it prevent the repeatation data when we click on button and it also prevent the infinite loop of data when we use setState in useEffect


// import React from 'react'
// import { useEffect } from 'react'
// const App = () => {
//   let [count, setCount] = React.useState(0)

//   useEffect(() => {
//     console.log('hello');
//   }, [])
//   return(

//     <div>
//       <h2>{count}</h2>
//       <button onClick={() => setCount(count + 1)}>click</button>
//     </div>
//   )
// }

// export default App

// import React from 'react'
// import { useEffect } from 'react'
// const App = () => {
//   let [city, setCity] = React.useState('goa')
//   let [count, setCount] = React.useState(0)

//   useEffect(() => {
//     console.log('hello');
//     async function fetchData() {
//       const res = await fetch('https://jsonplaceholder.typicode.com/posts')
//       const data = await res.json()
//       console.log(data);
//     }
//     fetchData();
//   }, [])

  
//   return(

//     <div>
//       <h2>{count}</h2>
//       <h3>{city}</h3>
//       <button onClick={() => setCity('mumbai')}>click</button>
     
//     </div>
//   )
// }



// export default App

// import { useEffect } from "react"
// import { useState } from "react"

// import './App.css'
// const App = () => {
//       let [ApiData,SetApiData]=    useState([])
//       useEffect(()=>{
//               //  console.log("hello"); 
//               async  function call(){
//                 let res=  await  fetch("https://dummyjson.com/products")
//                 let data=        await   res.json()
//                 console.log(data.products);
//                 SetApiData(data.products)
//               }
//               call()
//       },[])
      
//   return (
//     <div id="parent_div"   className="">
//         {
//           ApiData.map((a)=>{
//                return(
//                 <div id="card">
//                   <h1>{a.id}</h1>
//                   <img  src={a.thumbnail}/>
//                 </div>
//                )
//           })
//         }
//     </div>
//   )
// }

// export default App


//creating navbar
import './navbar,jsx'
import React from 'react'

function App() {
  return (
    <div>
      <navbar />
      App</div>
  )
}

export default App