// Address: 00453af8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453af8(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != *(char *)(param_1 + 0x16a)) {
    *(char *)(param_1 + 0x16a) = param_2;
    iVar1 = *(int *)(param_1 + 0x184);
    if (iVar1 != 0) {
      uVar2 = FUN_00408014(param_2,0);
      uVar3 = FUN_00453dec(param_1);
      FUN_004673cc(iVar1,*(undefined4 *)
                          (&DAT_00662e08 + (uint)(*(char *)(param_1 + 0x17d) == '\x01') * 4),uVar3,
                   uVar2);
      FUN_00454b84(*(undefined4 *)(param_1 + 0x184));
    }
  }
  return;
}

