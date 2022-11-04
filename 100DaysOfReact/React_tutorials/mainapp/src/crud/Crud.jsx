import React, { useState } from 'react'

function Crud() {

    const [todolist, setTodoList] = useState([]);
    const [newTask, setNewTask] = useState("");
    const [complete, setComplete] = useState(0);
    // jaise he change hoga he'll catch it 
    const handleChange = (event) => {
        setNewTask(event.target.value);
    }
    // purana array bna hua h, pehle use pura copy kro and then last mein apne value add krdo .
    const addTask = () => {
        const task = {
            id: todolist.length === 0 ? 1 : todolist[todolist.length-1].id+1,
            taskName: newTask, 
            completed: complete,
        }
        const newTodoList = [...todolist, task];
        setTodoList(newTodoList);
    }
    const deleteTask = (id) => {
        setTodoList(todolist.filter((task) => task.id !== id));
    }
    const completed = (id) => {
        setComplete(
            todolist.map((task) => {
                if (task.id === id) {
                    return{...task,completed:true};
                }
                else{
                    return task;
                }
            })
        );
    }
    return (
        <>
            <div className='App'>
                <div className='addTask'>
                    <input onChange={handleChange} />
                    <button onClick={addTask}> Add task </button>
                </div>
                <div className='list'
                style={{backgroundColor: completed ? "white": "blue"}}
                >
                    {/* idhar bas data display krna tha so we're mapping the data  */}
                    {todolist.map((task) => {
                        return (
                            <div>
                                <h1>{task.taskName}</h1>
                                <button onClick={() => deleteTask(task.id)}>X</button>
                                <button onClick={completed}>Completed</button>
                            </div>
                        )
                    })}
                </div>
            </div>
        </>
    )
}

export default Crud