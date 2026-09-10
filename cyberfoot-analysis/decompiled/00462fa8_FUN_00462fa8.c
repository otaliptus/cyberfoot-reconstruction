// Address: 00462fa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00462fa8(void)

{
  HANDLE pvVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_00662f9c + 0x180) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_00662f9c + 0x18c));
  uVar2 = GetWindowLongA(in_stack_00000004,-0x10);
  if ((uVar2 & 0x40000000) != 0) {
    LVar3 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar3 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_0066cb62,DAT_00662f9c);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_0066cb60,DAT_00662f9c);
  pvVar1 = DAT_00662f9c;
  DAT_00662f9c = (HANDLE)0x0;
  uVar4 = (**(code **)((int)pvVar1 + 0x18c))();
  return uVar4;
}

