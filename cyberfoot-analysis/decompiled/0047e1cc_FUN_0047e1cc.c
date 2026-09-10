// Address: 0047e1cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047e1cc(void)

{
  BOOL BVar1;
  uint uVar2;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_006631f0) && (in_stack_00000004 != *(HWND *)(DAT_0066cbf4 + 0x30)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
        if ((uVar2 & 8) == 0) {
          if (DAT_006631f4 == (HWND)0x0) {
            DAT_006631f4 = in_stack_00000004;
          }
        }
        else if (DAT_006631f8 == (HWND)0x0) {
          DAT_006631f8 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}

