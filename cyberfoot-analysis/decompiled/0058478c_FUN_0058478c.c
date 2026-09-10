// Address: 0058478c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058478c(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x234) < param_2) {
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x234);
  }
  else if (param_2 < *(int *)(param_1 + 0x238)) {
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x238);
  }
  else {
    *(int *)(param_1 + 0x25c) = param_2;
  }
  *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x25c) - *(int *)(param_1 + 0x238);
  uVar2 = FUN_00402c38();
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  if (*(char *)(param_1 + 600) == '\0') {
    iVar4 = *(int *)(param_1 + 0x178);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) * (longlong)iVar4;
    iVar3 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    iVar6 = *(int *)(param_1 + 0x184);
    lVar1 = (longlong)iVar6 * (longlong)iVar4;
    iVar4 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    iVar4 = (iVar3 + iVar6 * 2) - iVar4;
    *(int *)(param_1 + 0x174) = iVar4 - iVar6;
    iVar3 = *(int *)(param_1 + 0x184) + 1;
    if (iVar4 - iVar6 < iVar3) {
      *(int *)(param_1 + 0x174) = iVar3;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x178);
    lVar1 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar4;
    iVar5 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    iVar6 = *(int *)(param_1 + 0x184);
    iVar3 = iVar6 * 2;
    lVar1 = (longlong)iVar3 * (longlong)iVar4;
    iVar4 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    iVar4 = (iVar5 + iVar3) - iVar4;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x18c) - (iVar4 + iVar6 * -2);
    iVar6 = *(int *)(param_1 + 0x18c) + -1;
    if (iVar6 < *(int *)(param_1 + 0x184)) {
      *(int *)(param_1 + 0x184) = iVar6;
    }
  }
  if ((iVar4 != *(int *)(param_1 + 0x170)) ||
     (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x17c))) {
    *(int *)(param_1 + 0x170) = iVar4;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x17c);
    if ((*(int *)(param_1 + 0x25c) == *(int *)(param_1 + 0x234)) &&
       (*(short *)(param_1 + 0x242) != 0)) {
      (**(code **)(param_1 + 0x240))(*(undefined4 *)(param_1 + 0x244),param_1);
    }
    FUN_00466754(param_1);
  }
  return;
}

