// Address: 004ab384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ab384(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  
  iVar2 = FUN_004aa2e8(*(undefined4 *)(in_stack_00000004 + -4));
  cVar1 = FUN_004ab83c(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar1 != '\x02') {
    switch(*(undefined1 *)(iVar2 + 0x460)) {
    default:
      FUN_0040e370(PTR_DAT_00408738,1,0);
      uVar3 = FUN_00404250();
      break;
    case 1:
      uVar3 = 1;
      break;
    case 2:
    case 4:
      uVar3 = 2;
      break;
    case 8:
    case 0x10:
      cVar1 = *(char *)(iVar2 + 0x461);
      if ((cVar1 == '\0') || (cVar1 == '\x02')) {
        uVar3 = 6;
      }
      else if (cVar1 == '\x03') {
        uVar3 = 3;
      }
      else {
        FUN_0040e370(PTR_DAT_00408738,1,0);
        uVar3 = FUN_00404250();
      }
    }
    return uVar3;
  }
  return 6;
}

