=============
Simple search
=============

/ foo\x00

---

(commands
  (arged_command (cmd_identifier)
    (arg (arg_identifier))))


==============
Not matching
==============

/! ff
/!x 00

---

(commands
  (arged_command (cmd_identifier)
    (arg (arg_identifier)))
  (arged_command (cmd_identifier)
    (arg (arg_identifier))))


=======
Reg exp
=======

/e /E.F/i

---

(commands
  (arged_command (cmd_identifier)
    (arg (arg_identifier))))


===================
Search with nibbles
===================

/x ff..33

---

(commands
  (arged_command (cmd_identifier)
    (arg (arg_identifier))))