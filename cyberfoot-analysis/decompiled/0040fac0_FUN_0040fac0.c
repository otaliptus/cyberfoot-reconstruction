// Address: 0040fac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040fac0(void)

{
  DWORD DVar1;
  undefined1 local_6;
  undefined1 uStack_5;
  
  DVar1 = GetCurrentThreadId();
  local_6 = (byte)(DVar1 & 0xffff);
  uStack_5 = (byte)((DVar1 & 0xffff) >> 8);
  return CONCAT31((int3)(DVar1 >> 8),local_6 ^ uStack_5) & 0xffffff0f;
}

