        ��  ��                  �  d   W I N E _ R E G I S T R Y   A C T X P R X Y _ H T I F R A M E _ R _ R E S                   HKCR
{
    NoRemove Interface
    {
        '{863A99A0-21BC-11D0-82B4-00A0C90C29C5}' = s 'ITargetNotify'
        {
            NumMethods = s 5
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{3050F6B1-98B5-11CF-BB82-00AA00BDCE0B}' = s 'ITargetNotify2'
        {
            NumMethods = s 6
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{86D52E11-94A8-11D0-82AF-00C04FD5AE38}' = s 'ITargetFrame2'
        {
            NumMethods = s 15
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{7847EC01-2BEC-11D0-82B4-00A0C90C29C5}' = s 'ITargetContainer'
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
 