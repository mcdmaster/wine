        ��  ��                  W  P   W I N E _ R E G I S T R Y   A D S L D P _ R _ R E S                     HKCR
{
    NoRemove CLSID
    {
        '{228D9A81-C302-11CF-9AA4-00AA004A5691}' = s 'LDAP Provider Object'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
            ProgId = s 'LDAP'
        }
        '{228D9A82-C302-11CF-9AA4-00AA004A5691}' = s 'LDAP Namespace Object'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
            ProgId = s 'LDAPNamespace'
        }
        '{50B6327F-AFD1-11D2-9CB9-0000F87A369E}' = s 'AD System Info Object'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
    'LDAP' = s 'LDAP Provider Object'
    {
        CLSID = s '{228D9A81-C302-11CF-9AA4-00AA004A5691}'
    }
    'LDAPNamespace' = s 'LDAP Namespace Object'
    {
        CLSID = s '{228D9A82-C302-11CF-9AA4-00AA004A5691}'
    }
}
 