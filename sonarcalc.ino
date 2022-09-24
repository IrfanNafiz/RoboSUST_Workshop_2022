void SonarSensorRead() {
    // Clears the trigPin condition
    digitalWrite(sonartrig, LOW);
    delayMicroseconds(2);
    
    // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
    digitalWrite(sonartrig, HIGH);
    delayMicroseconds(10);
    digitalWrite(sonartrig, LOW);
    
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(sonarecho, HIGH);
    
    // Calculating the distance
    distance = duration * 0.0332 / 2; // Speed of sound wave divided by 2 (go and back)

}