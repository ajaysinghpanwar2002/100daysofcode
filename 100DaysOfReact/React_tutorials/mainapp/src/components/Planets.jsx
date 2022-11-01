import React from 'react'

function Planets() {
    const planets = [
        { name: "Mars", isGasPlanet: false },
        { name: "earth", isGasPlanet: false },
        { name: "jupiter", isGasPlanet: true },
        { name: "Venus", isGasPlanet: false },
        { name: "Neptune", isGasPlanet: true },
        { name: "Uranus", isGasPlanet: true },
    ];
    return (
        <div>
            {
                planets.map((planet, key) => planet.isGasPlanet && <h1 key={key}>{planet.name}</h1>)
            }
        </div>
    );
}

export default Planets