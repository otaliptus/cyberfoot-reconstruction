// Address: 0045203c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0045203c(int param_1,int param_2,undefined1 param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c;
  
  local_c = 0;
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    switch(param_3) {
    case 0:
      uVar5 = 0x400;
      break;
    case 1:
      uVar5 = 0x800;
      break;
    case 2:
      uVar5 = 0x100;
      break;
    case 3:
      uVar5 = 0x200;
      break;
    case 4:
      uVar5 = 0;
    }
    if (param_2 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_0044e73c(param_2);
    }
    if ((param_4 & 2) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((param_4 & 4) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((param_4 & 8) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((param_4 & 0x10) != 0) {
      uVar5 = uVar5 | 2;
    }
    uVar3 = FUN_0046cae0(param_1);
    iVar4 = FUN_00432c9c(uVar3,uVar2,uVar5);
    if (iVar4 != -1) {
      local_c = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar4);
    }
  }
  return local_c;
}

