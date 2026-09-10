// Address: 00406f6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406f6c(void)

{
  int iVar1;
  LPVOID lpTlsValue;
  
  iVar1 = FUN_00406f64();
  if (iVar1 != 0) {
    if (_tls_index == 0xffffffff) {
      FUN_00404824(0xe2);
    }
    lpTlsValue = (LPVOID)FUN_00406f58(iVar1);
    if (lpTlsValue == (LPVOID)0x0) {
      FUN_00404824(0xe2);
    }
    else {
      TlsSetValue(_tls_index,lpTlsValue);
    }
  }
  return;
}

