        ��  ��                  �  d   W I N E _ R E G I S T R Y   A C T X P R X Y _ S E R V P R O V _ R _ R E S                   HKCR
{
    NoRemove Interface
    {
        '{6D5140C1-7436-11CE-8034-00AA006009FA}' = s 'IServiceProvider'
        {
            NumMethods = s 4
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
   