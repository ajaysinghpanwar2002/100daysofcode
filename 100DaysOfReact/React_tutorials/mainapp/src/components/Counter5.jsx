import React, { useState } from 'react'

function Counter5() {
    const [count, setCount] = useState(0);
    const increment = () => {
        setCount(count + 1);
    }
    const decrement = () => {
        setCount(count - 1);
    }
    const zero = () => {
        setCount(0);
    }
    return (
        <div>
            <button onClick={increment}>Increase</button>
            <button onClick={decrement}>Decrease</button>
            <button onClick={zero}>Set to Zero</button>
            {count}
        </div>
    )
}

export default Counter5