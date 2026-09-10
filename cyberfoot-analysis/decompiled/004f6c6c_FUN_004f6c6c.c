// Address: 004f6c6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f6c6c(int param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5,
                code *param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_004032c8(param_2 - param_1);
  uVar3 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),
                       iVar2 + param_1 + 1);
  param_1 = param_1 + -1;
  param_2 = param_2 + 1;
  do {
    do {
      param_1 = param_1 + 1;
      uVar4 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_1);
      cVar1 = (*param_6)(param_7,uVar3,uVar4);
    } while (cVar1 == '\0');
    do {
      param_2 = param_2 + -1;
      uVar4 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_2);
      cVar1 = (*param_4)(param_5,uVar3,uVar4);
    } while (cVar1 == '\0');
    iVar2 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_2);
    iVar5 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_1);
    if (iVar2 != iVar5) {
      FUN_004f6b54(param_1,param_2);
    }
  } while (param_1 < param_2);
  iVar2 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_2);
  iVar5 = FUN_004f5b04(*(undefined4 *)(param_8 + -4),*(undefined4 *)(param_8 + -8),param_1);
  if (iVar2 != iVar5) {
    FUN_004f6b54(param_1,param_2);
  }
  return param_1;
}

