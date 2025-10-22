-- Keep a log of any SQL queries you execute as you solve the mystery.
--  I first look into the crime scene reports
SELECT day, street, month, description FROM crime_scene_reports WHERE day = 28 AND month = 7 AND street = 'Humphrey Street';
-- check the interviews
SELECT transcript, month, day FROM interviews WHERE month = 7 AND day = 28;
-- I checked the bakery logs
SELECT day, month, hour, activity, license_plate FROM bakery_security_logs WHERE day = 28 AND month = 7 AND hour = 10;
-- check the ATM transaction at legget street
SELECT month, day, atm_location, account_number, amount, transaction_type FROM atm_transactions WHERE month = 7 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';
-- check the thief's phone call during the theft
SELECT month, day, receiver, caller, id, duration FROM phone_calls WHERE month = 7 AND day = 28 AND duration < 50;
-- check earliest flight out of the town
SELECT full_name, city, abbreviation, id FROM airports WHERE city = 'Fiftyville';
SELECT origin_airport_id, destination_airport_id, month, day, hour, minute, id FROM flights WHERE origin_airport_id = 8 AND month = 7 AND day = 29;
-- check flight
SELECT flight_id, passport_number, seat FROM passengers WHERE flight_id = 36;
SELECT id, name, phone_number, passport_number, license_plate FROM people WHERE license_plate = NRYN856;


