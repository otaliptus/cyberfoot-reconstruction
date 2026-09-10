// Address: 005c0114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HRESULT FUN_005c0114(void)

{
  int iVar1;
  HRESULT HVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  HOLEMENU in_stack_0000000c;
  HWND in_stack_00000010;
  
  iVar1 = FUN_005be848(in_stack_00000004);
  HVar2 = 0;
  if (iVar1 != 0) {
    FUN_0047ad00(iVar1,in_stack_00000008);
    HVar2 = OleSetMenuDescriptor
                      (in_stack_0000000c,*(HWND *)(iVar1 + 0x38),in_stack_00000010,
                       (LPOLEINPLACEFRAME)0x0,(LPOLEINPLACEACTIVEOBJECT)0x0);
  }
  return HVar2;
}

