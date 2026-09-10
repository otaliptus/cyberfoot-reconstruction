// Address: 004a274c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a274c(int param_1,uint param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  short sVar5;
  uint uVar6;
  short asStack_2c [16];
  
  sVar5 = 0;
  iVar2 = 1;
  psVar3 = asStack_2c;
  do {
    psVar3 = psVar3 + 1;
    sVar5 = (*param_3 + sVar5) * 2;
    *psVar3 = sVar5;
    iVar2 = iVar2 + 1;
    param_3 = param_3 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  puVar4 = (ushort *)(param_1 + 2);
  if (param_2 < 0x80000000) {
    do {
      uVar6 = (uint)*puVar4;
      if (uVar6 != 0) {
        sVar5 = asStack_2c[uVar6];
        asStack_2c[uVar6] = asStack_2c[uVar6] + 1;
        uVar1 = FUN_004a4028(sVar5,uVar6);
        puVar4[-1] = uVar1;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar2 <= (int)param_2);
  }
  return;
}

