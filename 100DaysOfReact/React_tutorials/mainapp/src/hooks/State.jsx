import React, { useState } from 'react'

function State() {
  // const [age, setAge] = useState(0);
  // const increaseAge = () => {
  //   setAge(age + 1)
  // }
  // const [inputValue, setInputValue] = useState("");
  // const handleInputChange = (e) => {
  //   setInputValue(e.target.value)
  // }

  const [showText, setShowText] = useState(1);


  return (
    // <div>
    //   {age}
    //   <button onClick={increaseAge}>Increase Age</button>
    //   <input type="text" onChange={handleInputChange} />
    //   {inputValue}
    // </div>
    <div>
      <button onClick={()=>{
        setShowText(!showText)
      }}>Show/Hide</button>
      {showText && <h1>My name is Ajay</h1>}
    </div>
  )
}

export default State