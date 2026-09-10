// Address: 0046c1d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c1d8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  FUN_0046dc4c(param_1,*(undefined2 *)(param_2 + 4));
  cVar1 = FUN_0046c144(param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) goto LAB_0046c2b0;
  iVar2 = FUN_004673cc(param_1,0xb02e,*(undefined2 *)(param_2 + 4),param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  if (uVar3 < 0x1c) {
    if ((uVar3 == 0x1b) || (uVar3 == 3)) {
LAB_0046c260:
      uVar5 = 4;
    }
    else if (uVar3 == 9) {
      uVar5 = 2;
    }
    else if (uVar3 == 0xd) goto LAB_0046c260;
  }
  else if (uVar3 - 0x25 < 4) {
    uVar5 = 1;
  }
  else if (uVar3 == 0x2b) goto LAB_0046c260;
  if (((uVar5 != 0) &&
      (iVar2 = FUN_004673cc(param_1,0xb01e,*(undefined2 *)(param_2 + 4),0), iVar2 == 0)) &&
     (uVar3 = FUN_004673cc(param_1,0x87,0,0), (uVar3 & uVar5) == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar4 = FUN_0047e4c0(param_1);
    iVar2 = FUN_004673cc(uVar4,0xb005,*(undefined2 *)(param_2 + 4),uVar6);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0046c2b0:
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

