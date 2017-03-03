import QtQuick 2.2
import Sailfish.Silica 1.0

Dialog {
    property string jid
    property string name

    Column {
        width: parent.width

        DialogHeader {
		id: header
                title: "Join Rom"
	}

        TextField {
            id: jidField
            width: parent.width
            placeholderText: "id@domain.org"
            label: "Room address"
        }

        TextField {
            id: nameField
            width: parent.width
            placeholderText: "Name"
            label: "Room name"
        }
    }

    onDone: {
        if (result == DialogResult.Accepted) {
            jid = jidField.text
            name = nameField.text

            shmoose.joinRoom(jid, name)
        }
    }
}