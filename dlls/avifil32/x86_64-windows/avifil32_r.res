        ��  ��                  .  T   W I N E _ R E G I S T R Y   A V I F I L 3 2 _ R _ R E S                     HKCR
{
    NoRemove Interface
    {
        '{00020021-0000-0000-C000-000000000046}' = s 'IAVIStream'
        {
            NumMethods = s 14
            ProxyStubClsid32 = s '{0002000D-0000-0000-C000-000000000046}'
        }
        '{00020020-0000-0000-C000-000000000046}' = s 'IAVIFile'
        {
            NumMethods = s 10
            ProxyStubClsid32 = s '{0002000D-0000-0000-C000-000000000046}'
        }
    }
    NoRemove CLSID
    {
        '{00020000-0000-0000-C000-000000000046}' = s 'Microsoft AVI Files'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{00020001-0000-0000-C000-000000000046}' = s 'AVI Compressed Stream'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{00020003-0000-0000-C000-000000000046}' = s 'Microsoft Wave File'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{0002000D-0000-0000-C000-000000000046}' = s 'IAVIStream & IAVIFile Proxy'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{0002000F-0000-0000-C000-000000000046}' = s 'ACM Compressed Audio Stream'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
}
  