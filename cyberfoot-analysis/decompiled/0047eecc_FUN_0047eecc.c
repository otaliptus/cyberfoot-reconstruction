// Address: 0047eecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047eecc(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar2;
  undefined4 extraout_EDX_03;
  int *piVar3;
  
  piVar3 = (int *)(param_4 + -4);
  FUN_0046cae0(*(undefined4 *)(*piVar3 + 4),param_2,param_3,
               *(undefined4 *)(&DAT_00663210 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14),
               *(undefined4 *)(&DAT_00663238 + (uint)*(byte *)(*piVar3 + 0x34) * 4),
               -(uint)(param_1 != '\0'));
  FUN_00435838();
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (0 < *(int *)(*piVar3 + 0x24)) {
    FUN_0046cae0(*(undefined4 *)(*piVar3 + 4),extraout_EDX,extraout_ECX,
                 *(undefined4 *)(&DAT_00663214 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14),
                 *(undefined4 *)(*piVar3 + 0x24),0);
    FUN_00435838();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if (0 < *(int *)(*piVar3 + 0x38)) {
    FUN_0046cae0(*(undefined4 *)(*piVar3 + 4),uVar2,uVar1,
                 *(undefined4 *)(&DAT_00663218 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14),
                 *(undefined4 *)(*piVar3 + 0x38),0);
    FUN_00435838();
    uVar1 = extraout_ECX_01;
    uVar2 = extraout_EDX_01;
  }
  if (0 < *(int *)(*piVar3 + 0x30)) {
    FUN_0046cae0(*(undefined4 *)(*piVar3 + 4),uVar2,uVar1,
                 *(undefined4 *)(&DAT_0066321c + (uint)*(byte *)(*piVar3 + 0x18) * 0x14),
                 *(undefined4 *)(*piVar3 + 0x30),0);
    FUN_00435838();
    uVar1 = extraout_ECX_02;
    uVar2 = extraout_EDX_02;
  }
  uVar1 = FUN_00429e64(*(undefined4 *)(*piVar3 + 0x28),uVar2,uVar1,0);
  FUN_0046cae0(*(undefined4 *)(*piVar3 + 4),extraout_EDX_03,extraout_ECX_03,
               *(undefined4 *)(&DAT_00663220 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14),uVar1);
  FUN_00435838();
  return;
}

