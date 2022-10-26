import React from 'react'
import { useState } from 'react'

function Counter2() {
    const [count, setCount] = useState(0)
    return (
        <div>
            count: {count}
            <button onClick={()=> setCount(0)}>Reset</button>
            <button onClick={()=> setCount(prevCount=>prevCount+1)}>Increment</button>
            <button onClick={()=> setCount(prevCount=>prevCount-1)}>Decrement</button>
            
        </div>
    )
}

export default Counter2