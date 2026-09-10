// Address: 004dc240
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004dc240(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  WCHAR local_d4 [80];
  tagMENUITEMINFOW local_34;
  
  local_34.cbSize = 0x2c;
  local_34.fMask = 0x10;
  local_34.dwTypeData = local_d4;
  local_34.cch = 0x50;
  BVar1 = GetMenuItemInfoW(*(HMENU *)(in_stack_00000004 + -4),
                           (uint)*(ushort *)(*(int *)(in_stack_00000004 + -8) + 0x50),0,&local_34);
  if ((BVar1 == 0) || ((local_34.fType & 0x904) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

