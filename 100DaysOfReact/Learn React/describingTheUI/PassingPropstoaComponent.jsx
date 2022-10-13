// Step 1 : pass props to the child components

export default function Profile() {
    return (
        <Avatar
            person={{ name: 'Lin Lanying', imageId: '1bX5QH6' }}
            size={100}
        />
    );
}

// Step 2: Read props inside the child component 

function Avatar({ person, size }) {
    return (
        <img
            className="avatar"
            src={getImageUrl(person)}
            alt={person.name}
            width={size}
            height={size}
        />
    );
}

export default function Profile() {
    return (
        <div>
            <Avatar
                size={100}
                person={{
                    name: 'Katsuko Saruhashi',
                    imageId: 'YfeOqp2'
                }}
            />
            <Avatar
                size={80}
                person={{
                    name: 'Aklilu Lemma',
                    imageId: 'OKS67lh'
                }}
            />
        </div>
    );
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// destructuring 

// Don’t miss the pair of { and } curlies inside of ( and ) when declaring props:

function Avatar({ person, size }) {
    // ...
}

// is equivalent to

function Avatar(props) {
    let person = props.person;
    let size = props.size;
    // ...
}
// ------------------------------------------------------------------------------------------------------------------------------------------------

// Forwarding props with the JSX spread syntax 

function Profile({ person, size, isSepia, thickBorder }) {
    return (
        <div className="card">
            <Avatar
                person={person}
                size={size}
                isSepia={isSepia}
                thickBorder={thickBorder}
            />
        </div>
    );
}

// is equivalent to

function Profile(props) {
    return (
        <div className="card">
            <Avatar {...props} />
        </div>
    );
}

//--------------------------------------------------------------------------------------------------------------------------------------------------