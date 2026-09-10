// Address: 00406fb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LPVOID FUN_00406fb0(void)

{
  LPVOID pvVar1;
  int in_FS_OFFSET;
  
  if (DAT_0066c664 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  FUN_00406f6c();
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  return DAT_0066c670;
}

