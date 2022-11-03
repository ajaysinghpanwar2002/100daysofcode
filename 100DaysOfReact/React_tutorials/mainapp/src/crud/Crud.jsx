import React, { useState } from 'react'

function Crud() {

    const [todolist,setTodoList] = useState([]);
    const [newTask,setNewTask] = useState("");

    // jaise he change hoga he'll catch it 
    const handleChange = (event) =>{
        setNewTask(event.target.value);
    }
    // purana array bna hua h, pehle use pura copy kro and then last mein apne value add krdo .
    const handleClick = () => {
        const newTodoList = [...todolist, newTask];
        setTodoList(newTodoList);
    }
    const deleteTask = () => {
        setTodoList([]);
    }
    return (
        <>
            <div className='App'>
                <div className='addTask'>
                    <input onChange={handleChange}/>
                    <button onClick={handleClick}> Add task </button>
                </div>
                <div className='list'>
                    {/* idhar bas data display krna tha so we're mapping the data  */}
                    {todolist.map((task)=>{
                            return(
                                <div>
                                    <h1>{task}</h1>
                                    <button onClick={deleteTask(task)}>X</button>
                                </div>
                            )
                    })}
                </div>
            </div>
        </>
    )
}

export default Crud