        ��  ��                  �  d   W I N E _ R E G I S T R Y   A C T X P R X Y _ O B J S A F E _ R _ R E S                     HKCR
{
    NoRemove Interface
    {
        '{CB5BDC81-93C1-11CF-8F20-00805F2CD064}' = s 'IObjectSafety'
        {
            NumMethods = s 5
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
    }
    NoRemove CLSID
    {
        '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}' = s 'PSFactoryBuffer'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
}
  