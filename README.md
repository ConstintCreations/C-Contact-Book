# Contact Book in C

This is a simple contact book built in C.

![Contact Book Menu](/attachments/c-contact-book.png)

## Features

The contact book features a menu with 4 commands: 
 - 'a' to add a contact
 - 'l' to list your contacts
 - 'h' to see the help menu (Note that the help menu looks very similar to the menu you see on startup)
 - 'q' to quit

The terminal is cleared after every command to keep it clean.

It can be run with:

```
contact-book
```

This will save your data in contact_book_data.csv, but you can overwrite this by providing a file name like so:

```
contact-book contacts.csv
```
