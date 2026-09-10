// Address: 004ad494
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004ad494(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *in_stack_00000004;
  int in_stack_0000000c;
  
  uVar1 = 0;
  FUN_004ad3b0();
  uVar2 = *(undefined1 *)(in_stack_0000000c + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 2:
  case 3:
  case 0xb:
  case 0x10:
    uVar2 = uVar1;
    break;
  case 4:
    break;
  case 5:
  case 7:
    break;
  case 6:
    break;
  case 8:
    if ((BSTR)*in_stack_00000004 != (BSTR)0x0) {
      SysFreeString((BSTR)*in_stack_00000004);
    }
    *in_stack_00000004 = 0;
    uVar2 = uVar1;
    break;
  case 9:
  case 0xd:
    if ((int *)*in_stack_00000004 != (int *)0x0) {
      (**(code **)(*(int *)*in_stack_00000004 + 8))();
    }
    *in_stack_00000004 = 0;
    uVar2 = uVar1;
    break;
  case 0xc:
    FUN_00411d38(in_stack_00000004);
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0;
    in_stack_00000004[3] = 0;
    uVar2 = 0;
  }
  return uVar2;
}

