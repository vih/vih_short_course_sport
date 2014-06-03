VIH: Short Course Sport
------------------------------------

This module provides two forms of functionality:
* attaching additional products to a cart without making variations, 
* and providing additional options that are dynamically attached to the main product

####Using Extra Options

The module allows for a text field with multiple options to be added to the product display node and use them as options on the Add to Cart form.

Instructions:
* Custom line item for product.
* Create a Textfield on the line item.
  * This allows the module to save the data without having to rebuild the Commerce Cart module.
* Add the same existing Textfield field on the Product Display node type.
* After adding the field, enabled "Use this field to provide extra options. Customer will be able to select each item as an option" on the field's setting for its instance.

Each entry for this text field will then show up as an option to be selected when adding a course to the cart.

####Using Additional Products
This module provides a means to allow customers to pick an additional product to go with the course. It works by utilizing a second product reference field and displaying that product type's attributes as conditional options

Instructions:
* Add additional product reference field to display node.
* On the field's settings, check "Use this field to provide additional products that can be optionally added with the course."
*  When courses are added, content editors will be able to declare additional products.

####Displaying Extra Options and Additional Product Attributes

Views will have to be updated in order to show all of the proper information.

* Extra Options are set as the line item's field value and can be displayed that way.
* Additional products display as a new item in the cart.
  * To display the conditional attributes, there is a new Views field called "Additional Product Options" which will display all chosen attributes.