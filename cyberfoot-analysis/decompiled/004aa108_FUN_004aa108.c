// Address: 004aa108
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aa108(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  cVar3 = FUN_004ab8f4(param_1);
  if (cVar3 == '\0') {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    iVar4 = FUN_004aa2e8(param_1);
    uVar1 = *(undefined1 *)(iVar4 + 0x460);
    iVar4 = FUN_004aa2e8(param_1);
    uVar2 = *(undefined1 *)(iVar4 + 0x461);
    iVar4 = FUN_004aa2e8(param_1);
    uVar5 = FUN_004a5d14(*(undefined4 *)(iVar4 + 0x458),uVar2,uVar1);
    *param_2 = uVar5;
    iVar4 = FUN_004aa2e8(param_1);
    switch(*(undefined1 *)(iVar4 + 0x461)) {
    case 0:
      iVar4 = FUN_004aa2e8(param_1);
      if (*(char *)(iVar4 + 0x460) == '\x10') {
        *param_3 = 2;
      }
      else {
        *param_3 = 1;
      }
      break;
    default:
      *param_3 = 0;
      break;
    case 2:
      iVar4 = FUN_004aa2e8(param_1);
      *param_3 = (uint)*(byte *)(iVar4 + 0x460) * 3 >> 3;
      break;
    case 3:
      *param_3 = 1;
      break;
    case 4:
      iVar4 = FUN_004aa2e8(param_1);
      *param_3 = (uint)(*(byte *)(iVar4 + 0x460) >> 2);
      break;
    case 6:
      iVar4 = FUN_004aa2e8(param_1);
      *param_3 = (uint)(*(byte *)(iVar4 + 0x460) >> 1);
    }
  }
  return;
}

